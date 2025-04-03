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

vim.g.coc_global_extensions = { "coc-clangd" }

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
    -- Autocomplete inteligente para C++
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

    -- Autocomplete para () e {}
    {
        "windwp/nvim-autopairs",
        config = function()
            require("nvim-autopairs").setup({})
        end
    },
    -- Tema
    { "catppuccin/nvim", name = "catppuccin", priority = 1000 },
})

-- Configurar teclas do autocomplete
vim.api.nvim_set_keymap("i", "<Tab>", 'pumvisible() ? "\\<C-n>" : "\\<Tab>"', { noremap = true, expr = true, silent = true })
vim.api.nvim_set_keymap("i", "<S-Tab>", 'pumvisible() ? "\\<C-p>" : "\\<S-Tab>"', { noremap = true, expr = true, silent = true })
vim.api.nvim_set_keymap("i", "<CR>", 'pumvisible() ? "\\<C-y>" : "\\<CR>"', { noremap = true, expr = true, silent = true })

vim.opt.background = "dark"

require("catppuccin").setup({
 flavour = "mocha", -- Opções: latte, frappe, macchiato, mocha
 integrations = {
   treesitter = true,
   native_lsp = {
     enabled = true,
     virtual_text = {
       errors = { "italic" },
       hints = { "italic" },
       warnings = { "italic" },
       information = { "italic" },
     },
     underlines = {
       errors = { "underline" },
       hints = { "underline" },
       warnings = { "underline" },
       information = { "underline" },
     },
   },
   telescope = true,
   nvimtree = true,
 }
})

vim.cmd.colorscheme "catppuccin"
