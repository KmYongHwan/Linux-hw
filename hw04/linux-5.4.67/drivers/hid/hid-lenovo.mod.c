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
	{ 0x32238c2c, "hid_unregister_driver" },
	{ 0xad148d9b, "__hid_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x2af4b11a, "led_classdev_register_ext" },
	{ 0x5189c8a7, "hid_validate_values" },
	{ 0x754d539c, "strlen" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xc26bffc8, "hid_hw_start" },
	{ 0xfc1a2e89, "hid_open_report" },
	{ 0xcd34c3c2, "__hid_request" },
	{ 0x5ada0011, "input_event" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x37a0cba, "kfree" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd52dbe7d, "led_classdev_unregister" },
	{ 0xc3578ee2, "hid_hw_stop" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid");

MODULE_ALIAS("hid:b0003g*v000017EFp00006009");
MODULE_ALIAS("hid:b0003g*v000017EFp00006047");
MODULE_ALIAS("hid:b0005g*v000017EFp00006048");
MODULE_ALIAS("hid:b0003g*v000017EFp00006067");
MODULE_ALIAS("hid:b0003g*v000004B3p00003100");
MODULE_ALIAS("hid:b0003g*v000004B3p00003103");
MODULE_ALIAS("hid:b0003g*v000004B3p00003105");
MODULE_ALIAS("hid:b0003g*v000004B3p00003108");
MODULE_ALIAS("hid:b0003g*v000004B3p00003109");
MODULE_ALIAS("hid:b0003g*v000017EFp00006049");

MODULE_INFO(srcversion, "ABC5BE153B8396311E2178D");
