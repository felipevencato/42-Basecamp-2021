runtime! debian.vim
if has("syntax")
  syntax on
endif
set showcmd
set showmatch
set ignorecase
set smartcase
set incsearch
set autowrite
set hidden
set mouse=a
set number
set relativenumber
set smarttab
set smartindent
set autoindent
set wildmenu
set laststatus=2
set list
set listchars=space:.,eol:$,tab:┌┬┐,trail:·
set textwidth=80
" Relembra a posição do cursor
if has("autocmd")
  au BufReadPost * if line("'\"") > 1 && line("'\"") <= line("$") | exe "normal! g'\"" | endif
endif