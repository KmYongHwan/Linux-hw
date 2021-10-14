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
	{ 0xb659b1b8, "wmi_driver_unregister" },
	{ 0x169ea444, "__wmi_driver_register" },
	{ 0xe67878c0, "devm_led_classdev_register_ext" },
	{ 0xce593c22, "ledtrig_audio_get" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0x45081703, "ec_get_handle" },
	{ 0xff76d558, "input_register_device" },
	{ 0x3d2bd84a, "sparse_keymap_setup" },
	{ 0x71af84e7, "devm_input_allocate_device" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xaba842fe, "wmi_query_block" },
	{ 0xf3f8906b, "sparse_keymap_report_entry" },
	{ 0xcb631780, "sparse_keymap_entry_from_scancode" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wmi,ledtrig-audio,sparse-keymap");

MODULE_ALIAS("wmi:59142400-C6A3-40fa-BADB-8A2652834100");
MODULE_ALIAS("wmi:ABBC0F5C-8EA1-11D1-A000-C90629100000");

MODULE_INFO(srcversion, "8243F66E2EF9DECD186F2D2");
