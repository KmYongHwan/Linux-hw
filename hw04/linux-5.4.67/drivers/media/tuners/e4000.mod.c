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
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xdce54d36, "v4l2_i2c_subdev_init" },
	{ 0x74b280d5, "v4l2_ctrl_auto_cluster" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xb2c20827, "regmap_read" },
	{ 0xdd64e639, "strscpy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0x2057f44d, "regmap_bulk_write" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x37a0cba, "kfree" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("i2c:e4000");

MODULE_INFO(srcversion, "CFA22283B58DCE2F54D0F0E");
