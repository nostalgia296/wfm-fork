#ifndef STRINGS_EN_H
#define STRINGS_EN_H

#include "resource.h"

static inline void loadStrings_en() {
    lc_str.app_name = APP_NAME;
    lc_str.app_version = L"版本 " APP_VERSION;
    lc_str.app_dev_name = L"来自 " APP_DEV_NAME;
    lc_str.application = L"应用";
    lc_str.shortcut = L"快捷方式";
    lc_str.file = L"文件";
    lc_str.folder = L"文件夹";
    lc_str.local_drive = L"本地驱动";
    lc_str.cd_drive = L"CD驱动";
    lc_str.computer = L"计算机";
    lc_str.desktop = L"桌面";
    lc_str.documents = L"我的文档";
    lc_str.exit = L"退出";
    lc_str.edit = L"编辑";
    lc_str.cut = L"剪切";
    lc_str.copy = L"复制";
    lc_str.paste = L"粘贴";
    lc_str.paste_shortcut = L"粘贴快捷";
    lc_str.select_all = L"全部选择";
    lc_str.view = L"视图";
    lc_str.large_icons = L"大图标";
    lc_str.small_icons = L"小图标";
    lc_str.list = L"列表";
    lc_str.details = L"详情";
    lc_str.help = L"帮助";
    lc_str.about = L"关于";
    lc_str.ok = L"好的";
    lc_str.cancel = L"取消";
    lc_str.loading = L"加载中...";
    lc_str.open = L"打开";
    lc_str.create_shortcut = L"创建快捷";
    lc_str.delete = L"删除";
    lc_str.rename = L"重命名";
    lc_str.new_folder = L"新文件夹";
    lc_str.new_file = L"新文件";
    lc_str.items = L"项目";
    lc_str.load_iso_image = L"加载.iso";
    lc_str.unload_iso_image = L"卸载iso";
    lc_str.no_media = L"无媒体";
    lc_str.alert = L"警告";
    lc_str.enter_folder_name = L"Enter folder name:";
    lc_str.enter_file_name = L"Enter file name:";
    lc_str.enter_new_name = L"Enter new name:";
    lc_str.name = L"名字";
    lc_str.type = L"类型";
    lc_str.size = L"尺寸";
    lc_str.date = L"日期";
    lc_str.path = L"路径";
    lc_str.deleting_files = L"删除中";
    lc_str.copying_files = L"复制中";
    lc_str.moving_files = L"移动中";
    lc_str.extracting_files = L"解压中";
    lc_str.confirm_delete = L"确认删除";
    lc_str.confirm_exit = L"确认退出";
    lc_str.search = L"搜索";
    lc_str.up = L"向上";
    
    lc_str.fmt_file = L"%ls 文件";
    
    lc_str.msg_invalid_iso_image_file = L"无效iso镜像!";
    lc_str.msg_deleting_files = L"删除中，请等待...";
    lc_str.msg_copying_files = L"复制中，请等待...";
    lc_str.msg_moving_files = L"移动中，请等待...";
    lc_str.msg_extracting_files = L"解压中，请等待...";
    lc_str.msg_cancel_file_operation = L"确定取消操作?";
    lc_str.msg_confirm_delete_item = L"确定要删除 \"%ls\"?";
    lc_str.msg_confirm_delete_multiple_items = L"确定要删除 %d 个项目?";
    lc_str.msg_confirm_exit_app = L"确定要退出?";
}

#endif
