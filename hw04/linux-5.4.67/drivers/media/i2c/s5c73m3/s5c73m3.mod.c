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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xdb2e52f, "v4l2_async_register_subdev" },
	{ 0xf9a482f9, "msleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0x597b3a3f, "v4l2_ctrl_cluster" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8392a4c1, "spi_setup" },
	{ 0xdd64e639, "strscpy" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf45bf890, "devm_regulator_bulk_get" },
	{ 0x315de2cf, "v4l2_ctrl_get_menu" },
	{ 0x31404eda, "v4l2_ctrl_new_std_menu" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xf3d22e0d, "media_entity_pads_init" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x690e053c, "devm_gpio_request_one" },
	{ 0x85b7373, "spi_sync" },
	{ 0xc08bbc3c, "v4l2_device_unregister_subdev" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x610fc61f, "v4l2_ctrl_new_int_menu" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xee8356e4, "v4l2_ctrl_handler_log_status" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x74b280d5, "v4l2_ctrl_auto_cluster" },
	{ 0x26010d8e, "v4l2_device_register_subdev" },
	{ 0x8c59cc8d, "media_create_pad_link" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0xe31b2c85, "v4l2_subdev_init" },
	{ 0x7d8c5e78, "gpiod_set_raw_value" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0x71deb539, "request_firmware" },
	{ 0x9a0c4d09, "v4l2_async_unregister_subdev" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xede283d, "release_firmware" },
	{ 0xdce54d36, "v4l2_i2c_subdev_init" },
	{ 0x1fa8ea04, "regulator_enable" },
};

MODULE_INFO(depends, "videodev,mc");

MODULE_ALIAS("i2c:S5C73M3");
MODULE_ALIAS("of:N*T*Csamsung,s5c73m3");
MODULE_ALIAS("of:N*T*Csamsung,s5c73m3C*");

MODULE_INFO(srcversion, "783D954F1F7D97B2B1ADB1C");
