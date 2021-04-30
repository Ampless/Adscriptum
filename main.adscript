(defnative QApp "QApplication::QApplication(int, char **)")
(defnative MainWidget "MainWidget::MainWidget()")

(defn :export main args int
  (let app (QApp (len args) args))
  (let widget (MainWidget))
  (widget "show()")
  (app "exec()"))
