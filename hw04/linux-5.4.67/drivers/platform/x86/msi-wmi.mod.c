#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0x76ae31fd, "wmi_remove_notify_handler" },
	{ 0xe7ccd3bc, "backlight_device_unregister" },
	{ 0xc973710c, "backlight_device_register" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0xf18bdd75, "wmi_install_notify_handler" },
	{ 0xff76d558, "input_register_device" },
	{ 0x3d2bd84a, "sparse_keymap_setup" },
	{ 0xeebd5754, "input_allocate_device" },
	{ 0xc9d4d6d1, "wmi_has_guid" },
	{ 0xaba842fe, "wmi_query_block" },
	{ 0xd7752b86, "wmi_set_block" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf3f8906b, "sparse_keymap_report_entry" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x37a0cba, "kfree" },
	{ 0xcb631780, "sparse_keymap_entry_from_scancode" },
	{ 0x17b0f8ca, "wmi_get_event_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wmi,video,sparse-keymap");


MODULE_INFO(srcversion, "C35222E4E3586ED8BD5D61E");
