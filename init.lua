-- Define a tecla líder como "\"
vim.g.mapleader = "\\"

-- Mapeia \r para compilar
vim.api.nvim_set_keymap("n", "<leader>r", ":w<CR>:!g++ -std=c++20 % -o %:r<CR>", { noremap = true, silent = true })

-- Mapeia \t para compilar e rodar
vim.api.nvim_set_keymap("n", "<leader>t", ":w<CR>:!g++ -std=c++20 % -o %:r && ./%:r<CR>", { noremap = true, silent = true })

vim.opt.tabstop = 4
vim.opt.shiftwidth = 4
vim.opt.expandtab = true

-- Ativar números de linha
vim.opt.number = true
vim.opt.relativenumber = true

-- Instalar Lazy se não estiver instalado
local lazypath = vim.fn.stdpath("data") .. "/lazy/lazy.nvim"
if not vim.loop.fs_stat(lazypath) then
    vim.fn.system({
        "git", "clone", "--filter=blob:none",
        "https://github.com/folke/lazy.nvim.git", lazypath
    })
end
vim.opt.rtp:prepend(lazypath)

-- Configurar plugins
require("lazy").setup({
    -- Autocompletar inteligente para C++
    {
        "neoclide/coc.nvim",
        branch = "release",
        config = function()
            vim.cmd([[
                let g:coc_global_extensions = ['coc-clangd']
            ]])
        end
    },
    
    -- Melhor highlight para C++ com Treesitter
    {
        "nvim-treesitter/nvim-treesitter",
        build = ":TSUpdate",
        config = function()
            require("nvim-treesitter.configs").setup({
                ensure_installed = { "cpp", "c" },
                highlight = { enable = true },
            })
        end
    },
    "folke/tokyonight.nvim",  -- Tema
})

vim.cmd("colorscheme tokyonight-night") -- Ativa o tema dark
