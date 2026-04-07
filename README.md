# dotfiles

Personal dotfiles managed with Chezmoi.

This repository is used to install and maintain shell, editor, package, accessibility,
and workstation configuration across Linux, WSL, and Windows systems. Templates are
rendered through Chezmoi, and secrets are referenced through 1Password instead of
being stored directly in the repo.

## Why This Exists

This setup grew out of two practical problems: machines fail, and rebuilding an
environment from memory is slow and error-prone.

As a computer science student with multiple disabilities, I wanted a setup that makes
future machine recovery and day-to-day configuration changes as painless as possible.
That means keeping important shell, editor, accessibility, and package-management
settings in one place so they can be reapplied consistently.

Chezmoi is the main tool for managing user-level configuration, and Chezetc is part of
the broader workflow for handling root-owned files separately. The goal is portability,
repeatability, and less friction when moving between systems or recovering from a lost
machine.

## Highlights

- Cross-platform setup with Chezmoi templates
- Arch Linux and WSL workflow with `paru`
- Windows package bootstrap via `winget`
- Bash and PowerShell profiles managed from one source of truth
- App-specific config for tools such as GitHub CLI, NVDA, Starship, Topgrade, and QMK
- Separate package inventory exports for Linux and Windows
- Accessibility-minded setup intended to reduce rebuild effort

## Repository Layout

- `dot_*`: files that map to home-directory dotfiles through Chezmoi naming rules
- `dot_config/`: XDG-style application configuration
- `AppData/`: Windows application data and config files
- `package-lists/`: exported package inventories for Linux and Windows
- `qmk_firmware/`: personal QMK keyboard layout files
- `readonly_Documents/readonly_workspaces/`: VS Code workspace files
- `run_onchange_*`: Chezmoi scripts that bootstrap packages during apply

## Requirements

- `chezmoi`
- `1Password` and `op` CLI for templates that use `onepasswordRead`
- On Linux and WSL: Arch Linux with `pacman` and access to install `paru`
- On Windows: `winget`

## Secrets

Secrets are expected to come from 1Password references inside templates.

Examples in this repo include values such as:

- GitHub CLI auth tokens
- API keys for local applications

Before applying on a fresh machine, make sure the required items exist in your
1Password vault and that `op` is authenticated.

## Getting Started

Clone the repository into the Chezmoi source directory or initialize from it.

```bash
chezmoi init https://github.com/RareBird15/dotfiles.git
chezmoi apply
```

If you already use a local source directory:

```bash
chezmoi cd
chezmoi apply
```

## Common Workflow

Preview changes before applying:

```bash
chezmoi diff
```

Apply changes:

```bash
chezmoi apply
```

Edit a managed file:

```bash
chezmoi edit ~/.bashrc
```

Update package bootstrap inputs and re-apply:

```bash
chezmoi apply
```

## Platform Notes

### Linux / WSL

- Primary WSL distro is Arch Linux
- Installs base build tooling and `paru` if needed
- Applies packages listed in `.chezmoidata/packages.yaml`
- Includes WSL-specific shell behavior where relevant

### Windows

- Uses `winget` for package bootstrap
- Manages PowerShell profile and AppData-backed config

## Maintenance

- Keep secrets out of the repo and local history artifacts
- Update `package-lists/` when package inventories change
- Document notable behavior changes in `CHANGELOG.md`

## License

This repository is available under the MIT License. See `LICENSE` for details.
