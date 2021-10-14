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
	{ 0x442639ef, "param_ops_uint" },
	{ 0x32238c2c, "hid_unregister_driver" },
	{ 0xad148d9b, "__hid_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xcd34c3c2, "__hid_request" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc26bffc8, "hid_hw_start" },
	{ 0xfc1a2e89, "hid_open_report" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x37a0cba, "kfree" },
	{ 0xc3578ee2, "hid_hw_stop" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x5ada0011, "input_event" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid");

MODULE_ALIAS("hid:b0003g*v00001B96p00000001");
MODULE_ALIAS("hid:b0003g*v00001B96p00000003");
MODULE_ALIAS("hid:b0003g*v00001B96p00000004");
MODULE_ALIAS("hid:b0003g*v00001B96p00000005");
MODULE_ALIAS("hid:b0003g*v00001B96p00000006");
MODULE_ALIAS("hid:b0003g*v00001B96p00000007");
MODULE_ALIAS("hid:b0003g*v00001B96p00000008");
MODULE_ALIAS("hid:b0003g*v00001B96p00000009");
MODULE_ALIAS("hid:b0003g*v00001B96p0000000A");
MODULE_ALIAS("hid:b0003g*v00001B96p0000000B");
MODULE_ALIAS("hid:b0003g*v00001B96p0000000C");
MODULE_ALIAS("hid:b0003g*v00001B96p0000000D");
MODULE_ALIAS("hid:b0003g*v00001B96p0000000E");
MODULE_ALIAS("hid:b0003g*v00001B96p0000000F");
MODULE_ALIAS("hid:b0003g*v00001B96p00000010");
MODULE_ALIAS("hid:b0003g*v00001B96p00000011");
MODULE_ALIAS("hid:b0003g*v00001B96p00000012");
MODULE_ALIAS("hid:b0003g*v00001B96p00000013");
MODULE_ALIAS("hid:b0003g*v00001B96p00000014");

MODULE_INFO(srcversion, "07E17B1ECCB85B286213DEE");
