# Contributing

This is primarily a personal dotfiles repository, so changes are expected to be
small, deliberate, and easy to review.

## Principles

- Prefer simple, readable configuration over clever indirection
- Keep platform-specific logic isolated to the smallest practical scope
- Favor changes that improve portability, recovery, and accessibility
- Never commit plaintext secrets, tokens, or machine-specific credentials
- Preserve existing behavior unless the change intentionally updates it

## Workflow

1. Make changes in the Chezmoi source state.
2. Review with `chezmoi diff`.
3. Test on the target platform when the change is platform-specific.
4. Update `CHANGELOG.md` for user-visible or maintenance-relevant changes.

## Templates and Secrets

- Use Chezmoi templates for conditional behavior.
- Use `onepasswordRead` for secrets instead of storing values in the repo.
- Avoid checking in local history, generated files, or editor artifacts.

## Pull Requests

If this repository is ever opened to external contributions, prefer pull requests
that are narrowly scoped and include a short explanation of the change.
