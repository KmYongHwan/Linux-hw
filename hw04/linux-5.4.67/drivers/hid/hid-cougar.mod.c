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
	{ 0xa07a0caf, "param_get_bool" },
	{ 0x32238c2c, "hid_unregister_driver" },
	{ 0xad148d9b, "__hid_register_driver" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xa68a7b33, "hid_hw_open" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x3abeb957, "devm_add_action" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xf5537e2e, "hid_compare_device_paths" },
	{ 0xc26bffc8, "hid_hw_start" },
	{ 0xfc1a2e89, "hid_open_report" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x37a0cba, "kfree" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbd253f4c, "hid_hw_close" },
	{ 0xc3578ee2, "hid_hw_stop" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x5ada0011, "input_event" },
	{ 0x63ff5507, "param_set_bool" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid");

MODULE_ALIAS("hid:b0003g*v0000060Bp0000500A");
MODULE_ALIAS("hid:b0003g*v0000060Bp0000700A");

MODULE_INFO(srcversion, "ADAD056FC0210CD120AC9C6");
