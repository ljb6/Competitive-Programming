-- ~/.config/nvim/init.lua
-- MacOS

-- Bootstrapping Lazy.nvim
local lazypath = vim.fn.stdpath("data") .. "/lazy/lazy.nvim"
if not vim.loop.fs_stat(lazypath) then
  vim.fn.system({
    "git", "clone", "--filter=blob:none",
    "https://github.com/folke/lazy.nvim.git",
    "--branch=stable", lazypath,
  })
end
vim.opt.rtp:prepend(lazypath)

require("lazy").setup({
  -- Plugins
  {'nvim-treesitter/nvim-treesitter', build = ':TSUpdate'},
  'neovim/nvim-lspconfig',
  'hrsh7th/nvim-cmp',
  'hrsh7th/cmp-nvim-lsp',
  'L3MON4D3/LuaSnip',
  'saadparwaiz1/cmp_luasnip',
  { "catppuccin/nvim", name = "catppuccin", priority = 1000 },
  {
    "windwp/nvim-autopairs",
    config = function()
        require("nvim-autopairs").setup({})
    end
  },
})

require("cpp")

vim.g.mapleader = "\\"

-- Keymaps
-- <leader>t compila e executa com g++-14
vim.keymap.set("n", "<leader>t", ":!g++-14 -std=c++17 -Wall -Wextra % -o %:r && ./%:r<CR>")
-- <leader>r só compila com g++-14
vim.keymap.set("n", "<leader>r", ":!g++-14 -std=c++17 -Wall -Wextra % -o %:r<CR>")



vim.o.tabstop = 4       
vim.o.shiftwidth = 4    
vim.o.expandtab = true 

-- Ativar números de linha
vim.opt.number = true
vim.opt.relativenumber = true

vim.opt.background = "dark"

require("catppuccin").setup({
  flavour = "mocha", 
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



