#加入公共头文件
include_directories(${CMAKE_SOURCE_DIR}/include)
include_directories(${CMAKE_SOURCE_DIR}/thirdparty)
#公共引用库
link_directories(${CMAKE_SOURCE_DIR}/lib)

#添加组件
add_subdirectory(MainUI)

#输出的exe带"d"
set_target_properties(MainUI PROPERTIES DEBUG_POSTFIX "d")