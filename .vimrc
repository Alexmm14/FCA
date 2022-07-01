syntax on

set number
set rnu
set numberwidth=4
set mouse=a
set noerrorbells
set sw=4
set expandtab
set noswapfile
set nobackup
set incsearch
set ignorecase
set cursorline
set clipboard=unnamedplus
set encoding=utf-8
set colorcolumn=150
set termguicolors

highlight Colocolum ctermbg=0 guibg=lightgrey

call plug#begin('~/local/share/vim/plugged')
Plug 'morhetz/gruvbox'
call plug#end()

set background=dark
let g:gruvbox_cotrast_dark="hard"
colorscheme gruvbox
