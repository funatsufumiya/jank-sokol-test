(defproject jank-sokol-test "0.1-SNAPSHOT"
  :license {:name "MIT"
            :url "https://mit-license.org/"}
  :dependencies []
  :plugins [[org.jank-lang/lein-jank "0.6"]]
  :middleware [leiningen.jank/middleware]
  :main jank-sokol-test.main
  :jank {:include-dirs ["include"]
         :library-dirs ["lib"]
         :linked-libraries ["glfw", "glew"]}
  :profiles {:base {:jank {:output-dir "target/debug"
                           :optimization-level 0}}
             :release {:jank {:output-dir "target/release"
                              :optimization-level 2}}})
