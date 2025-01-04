
//membuat gradle task sendiri(automation) menampilkan properties yang ada di gradle.properties
task.register("namaCustomGradleTaskNya"){
  val namaKey: String by project
  val namaKey: String by project

  doLast{
    println(${namaKey}:${namaKey})
  }

}

//menambahkan repository default dari gradle ada:
repositories{
  //repository maven central atau java maven
  mavenCentral()

  //repository bintray JCenter
  jcenter()

  //repository google android
  google() 

  //repository bikinan sendiri
  maven{
    url = uri(https://linknya/repositories)
  }
}
