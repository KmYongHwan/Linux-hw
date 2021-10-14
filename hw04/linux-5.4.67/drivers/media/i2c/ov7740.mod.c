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
	{ 0x350dca55, "v4l2_event_subdev_unsubscribe" },
	{ 0xf9cab3bd, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0xfb988a95, "v4l2_ctrl_subdev_log_status" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x9a0c4d09, "v4l2_async_unregister_subdev" },
	{ 0x64a44a10, "__v4l2_ctrl_handler_setup" },
	{ 0x4074809f, "regmap_multi_reg_write" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0xdb2e52f, "v4l2_async_register_subdev" },
	{ 0xc5850110, "printk" },
	{ 0xb3d574c3, "v4l2_ctrl_handler_setup" },
	{ 0x74b280d5, "v4l2_ctrl_auto_cluster" },
	{ 0x31404eda, "v4l2_ctrl_new_std_menu" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0xf3d22e0d, "media_entity_pads_init" },
	{ 0xdce54d36, "v4l2_i2c_subdev_init" },
	{ 0x9504f9c1, "__devm_regmap_init_i2c" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2477c80f, "gpiod_set_value" },
	{ 0x815588a6, "clk_enable" },
	{ 0x30e70d02, "gpiod_direction_output" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x8b94c8a7, "pm_runtime_get_if_in_use" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,mc");

MODULE_ALIAS("of:N*T*Covti,ov7740");
MODULE_ALIAS("of:N*T*Covti,ov7740C*");
MODULE_ALIAS("i2c:ov7740");

MODULE_INFO(srcversion, "E82EF4AAE65FADBF0D732DA");
