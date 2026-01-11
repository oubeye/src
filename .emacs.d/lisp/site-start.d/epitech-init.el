;;
;; EPITECH PROJECT, 2018
;; epitech-emacs
;; File description:
;; autoload epitech configuration on startup
;;


(require 'package)
(add-to-list 'package-archives
             '("melpa" . "https://melpa.org/packages/") t)
(package-initialize)  ;; Only for Emacs < 27
(load "epitech/std.el")
(load "epitech/std_comment.el")
