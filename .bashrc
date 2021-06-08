export LS_OPTIONS='--color=auto'
export GEM_HOME=/usr/local/bundle
export PATH=/usr/local/bundle/bin:/usr/local/bundle/gems/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin
export http_proxy=10.2.80.01:3128
export https_proxy=10.2.80.01:3128

eval "`dircolors`"
alias ls='ls $LS_OPTIONS'
alias ll='ls -l'
alias l='ls -lA'
alias basecamp='bash ${HOME}/.basecamp/basecamp'

export PATH="$HOME/.local/bin:$PATH"
export EDITOR="vim"

export PS1='\w>'
