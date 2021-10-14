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
	{ 0x6a14014e, "_dev_warn" },
	{ 0xc5850110, "printk" },
	{ 0xf3d22e0d, "media_entity_pads_init" },
	{ 0xdce54d36, "v4l2_i2c_subdev_init" },
	{ 0x597b3a3f, "v4l2_ctrl_cluster" },
	{ 0xcca54e63, "v4l2_ctrl_new_custom" },
	{ 0x6241682, "v4l2_ctrl_new_std_menu_items" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0xf45bf890, "devm_regulator_bulk_get" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xdfec67c9, "i2c_smbus_read_word_data" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xb3d574c3, "v4l2_ctrl_handler_setup" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x2f4e42e1, "i2c_smbus_write_word_data" },
	{ 0x8cf22ace, "regulator_bulk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x59f91a4d, "regulator_bulk_enable" },
	{ 0xc08bbc3c, "v4l2_device_unregister_subdev" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mc,videodev");

MODULE_ALIAS("i2c:mt9t001");

MODULE_INFO(srcversion, "BC6F1134996C66DBAA9E692");
