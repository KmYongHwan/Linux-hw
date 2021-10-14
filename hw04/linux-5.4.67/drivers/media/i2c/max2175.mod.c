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
	{ 0xb3d574c3, "v4l2_ctrl_handler_setup" },
	{ 0xdb2e52f, "v4l2_async_register_subdev" },
	{ 0xcca54e63, "v4l2_ctrl_new_custom" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0xdce54d36, "v4l2_i2c_subdev_init" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0xb8d89726, "fwnode_property_read_u32_array" },
	{ 0x250dc6c8, "fwnode_property_present" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xdd64e639, "strscpy" },
	{ 0x12a38747, "usleep_range" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x9a0c4d09, "v4l2_async_unregister_subdev" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("of:N*T*Cmaxim,max2175");
MODULE_ALIAS("of:N*T*Cmaxim,max2175C*");
MODULE_ALIAS("i2c:max2175");

MODULE_INFO(srcversion, "0AA0DA61E7AED23C03C436C");
