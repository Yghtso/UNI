# Bash Tab completion for ./pweb (loaded from ~/.bashrc).
_pweb() {
  local cur=${COMP_WORDS[COMP_CWORD]} prev=${COMP_WORDS[COMP_CWORD-1]}
  local cmds="start stop restart status logs mysql export import reset-db install-browsers browser help"

  if (( COMP_CWORD == 1 )); then
    COMPREPLY=($(compgen -W "$cmds" -- "$cur"))
    return
  fi

  case "${COMP_WORDS[1]}" in
    start|restart)
      if (( COMP_CWORD == 2 )); then
        COMPREPLY=($(compgen -W "express" -- "$cur"))
      elif (( COMP_CWORD == 3 )) && [[ $prev == express ]]; then
        compopt -o filenames; mapfile -t COMPREPLY < <(compgen -d -- "$cur")   # Express folder
      fi ;;
    logs)    (( COMP_CWORD == 2 )) && COMPREPLY=($(compgen -W "web db phpmyadmin node" -- "$cur")) ;;
    browser) (( COMP_CWORD == 2 )) && COMPREPLY=($(compgen -W "firefox chrome" -- "$cur")) ;;
    import)
      if (( COMP_CWORD == 2 )); then   # .sql files and folders
        compopt -o filenames
        mapfile -t COMPREPLY < <(compgen -d -- "$cur"; compgen -f -X '!*.sql' -- "$cur")
      fi ;;
  esac
}
complete -F _pweb ./pweb pweb
