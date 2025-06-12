;;
;; EPITECH PROJECT, 2018
;; epitech-emacs
;; File description:
;; global emacs configuration
;;

(set-variable 'c-argdecl-indent   0)

(normal-erase-is-backspace-mode 0)

; Define keyboard shortcuts
(global-set-key (kbd "C-h") 'backward-delete-char)
(global-set-key (kbd "C-c C-c") 'compile)
(global-set-key (kbd "C-g") 'goto-line)

; Adjust indentation settings
(setq c-default-style "gnu"
      c-basic-offset 4
      tab-width 4)
(setq tab-stop-list '(4 8 12 16 20 24 28 32 36 40 44 48 52 56 60 64 68 72 76 80))
(setq-default indent-tabs-mode nil)


;;personal add
;;electric pairing
(electric-pair-mode 1)
;; Highlight after the 80th column
(require 'whitespace)
(setq whitespace-style '(face lines-tail))
(setq whitespace-line-column 79)
(global-whitespace-mode t)

;changing opening direction
(setq split-height-threshold nil)   ; Prevent horizontal splitting
(setq split-width-threshold 0)      ; Force vertical splitting

;;eneabeling jump todefinition
(use-package ggtags
  :ensure t
  :hook (c-mode . ggtags-mode)
  :config
  (define-key ggtags-mode-map (kbd "M-.") 'ggtags-find-definition)
  (define-key ggtags-mode-map (kbd "M-,") 'pop-tag-mark))


;;uncomment for yaml
;;Ensure yaml-mode is installed
(use-package yaml-mode
  :ensure t
  :mode ("\\.yml\\'" . yaml-mode)
  :mode ("\\.yaml\\'" . yaml-mode))

;; Optional: dockerfile-mode for Dockerfiles
;;(use-package dockerfile-mode
;;  :ensure t
;;  :mode ("Dockerfile\\'" . dockerfile-mode))
;;Optional: If you use LSP for YAML (like `yaml-language-server` from npm)
;;(use-package lsp-mode
;;  :ensure t
;;  :hook (yaml-mode . lsp)
;;  :commands lsp)

;;Indentation for YAML (especially for Docker Compose)
(add-hook 'yaml-mode-hook
          (lambda ()
            (define-key yaml-mode-map "\C-m" 'newline-and-indent)))

;;Optionally enable flycheck for YAML syntax checking
(use-package flycheck
  :ensure t
  :init (global-flycheck-mode))

;;(use-package flycheck-yamllint
;;  :ensure t
;;  :after flycheck
;;  :config
;;  (add-hook 'yaml-mode-hook 'flycheck-mode))

(require 'package)
(setq package-archives '(("melpa" . "https://melpa.org/packages/")
                         ("gnu" . "https://elpa.gnu.org/packages/")))
(unless (package-installed-p 'use-package)
  (package-refresh-contents)
  (package-install 'use-package))
(require 'use-package)

(require 'package)
(setq package-archives '(("melpa" . "https://melpa.org/packages/")
                         ("gnu" . "https://elpa.gnu.org/packages/")
                         ("nongnu" . "https://elpa.nongnu.org/nongnu/")))

;;Ensure use-package is installed
(unless (package-installed-p 'use-package)
  (package-refresh-contents)
  (package-install 'use-package))

(require 'use-package)
