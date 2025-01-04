
//membuat gradle task sendiri(automation) menampilkan properties yang ada di gradle.properties
task.register("namaCustomGradleTaskNya"){
  val namaKey: String by project
  val namaKey: String by project

  doLast{
    println(${namaKey}:${namaKey})
  }

}
