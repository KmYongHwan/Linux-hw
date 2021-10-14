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
	{ 0x9a43e199, "_dev_info" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xbb77e50, "input_ff_create_memless" },
	{ 0xa89177c8, "input_set_capability" },
	{ 0xc26bffc8, "hid_hw_start" },
	{ 0xfc1a2e89, "hid_open_report" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc3578ee2, "hid_hw_stop" },
	{ 0x5ada0011, "input_event" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid,ff-memless");

MODULE_ALIAS("hid:b0003g*v0000045Ep0000003B");
MODULE_ALIAS("hid:b0003g*v0000045Ep00000048");
MODULE_ALIAS("hid:b0003g*v0000045Ep000000DB");
MODULE_ALIAS("hid:b0003g*v0000045Ep000000DC");
MODULE_ALIAS("hid:b0003g*v0000045Ep0000071D");
MODULE_ALIAS("hid:b0003g*v0000045Ep000000F9");
MODULE_ALIAS("hid:b0003g*v0000045Ep00000713");
MODULE_ALIAS("hid:b0003g*v0000045Ep00000730");
MODULE_ALIAS("hid:b0003g*v0000045Ep000000B4");
MODULE_ALIAS("hid:b0003g*v0000045Ep00000750");
MODULE_ALIAS("hid:b0003g*v0000045Ep00000732");
MODULE_ALIAS("hid:b0003g*v0000045Ep0000009D");
MODULE_ALIAS("hid:b0003g*v0000045Ep0000076C");
MODULE_ALIAS("hid:b0003g*v0000045Ep000007DA");
MODULE_ALIAS("hid:b0003g*v0000045Ep000000E3");
MODULE_ALIAS("hid:b0005g*v0000045Ep00000701");
MODULE_ALIAS("hid:b0005g*v0000045Ep0000091B");
MODULE_ALIAS("hid:b0005g*v0000045Ep000002FD");
MODULE_ALIAS("hid:b0005g*v0000045Ep000002E0");

MODULE_INFO(srcversion, "8226BB17E12D9F0E1605072");
