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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x15fc91fe, "device_init_wakeup" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0xff76d558, "input_register_device" },
	{ 0xa89177c8, "input_set_capability" },
	{ 0x890ce5c1, "matrix_keypad_build_keymap" },
	{ 0x71af84e7, "devm_input_allocate_device" },
	{ 0x9113120c, "devm_kasprintf" },
	{ 0xae1d7bee, "matrix_keypad_parse_properties" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0xa207ab13, "cros_ec_cmd_xfer" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x7647726c, "handle_sysrq" },
	{ 0xa9dcba35, "pm_wakeup_dev_event" },
	{ 0x5ada0011, "input_event" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "matrix-keymap");


MODULE_INFO(srcversion, "00C8C1CA29CF41DBB4542EE");
