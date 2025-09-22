project('wfm', 'c',
  version: '1.5',
  default_options: [
    'c_std=c99',
    'buildtype=release',
    'b_ndebug=if-release',
    'b_lto=true',
    'warning_level=0'
  ]
)


project_dir = meson.current_source_dir()

# 编译器标志
add_project_arguments([
  '-DUNICODE',
  '-D_UNICODE',
  '-DCOBJMACROS',
  '-DWINVER=0x0600'
], language: 'c')

# 包含目录
include_dirs = include_directories([
  'include',
  'include/libcdio'
])

# 源文件列表
sources = [
  'src/main.c',
  'src/content_view.c',
  'src/toolbar.c',
  'src/navbar.c',
  'src/treeview.c',
  'src/sizebar.c',
  'src/statusbar.c',
  'src/file_node.c',
  'src/file_actions.c',
  'src/input_dialog.c'
]

# Windows 资源文件
windows = import('windows')
resources = windows.compile_resources(
  'res/resource.rc',
  include_directories: [
    include_dirs,
    include_directories('res')
  ],
  depend_files: [
    'res/Application.manifest',
    'res/main.ico',
    'res/go.ico',
    'res/refresh.ico',
    'res/search.ico',
    'res/nav_arrow.ico',
    'res/up.ico',
    'res/copy.ico',
    'res/cut.ico',
    'res/paste.ico',
    'res/delete.ico',
    'res/new_folder.ico',
    'res/new_file.ico',
    'include/resource.h'
  ]
)


libcdio_path = join_paths(project_dir, 'libcdio.dll')


link_args = [
  '-s',
  '-lcomctl32',
  '-lgdi32',
  '-lole32',
  '-luuid',
  libcdio_path,
  '-Wl,--subsystem,windows'
]

# 构建可执行文件
executable('wfm',
  sources: sources + [resources],
  include_directories: include_dirs,
  link_args: link_args,
  win_subsystem: 'windows',
  install: true
)
