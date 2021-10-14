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
	{ 0x82d7b2fd, "v4l2_subdev_link_validate" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0x59f91a4d, "regulator_bulk_enable" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xf3d22e0d, "media_entity_pads_init" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf45bf890, "devm_regulator_bulk_get" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0xdce54d36, "v4l2_i2c_subdev_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xf8bc59ed, "v4l2_ctrl_g_ctrl_int64" },
	{ 0x7c25e26e, "v4l2_querymenu" },
	{ 0xdda5f243, "v4l2_ctrl_g_ctrl" },
	{ 0xfe1df5a9, "v4l2_ctrl_find" },
	{ 0x9a0c4d09, "v4l2_async_unregister_subdev" },
	{ 0x51ae8e57, "v4l2_async_notifier_cleanup" },
	{ 0xe05883d9, "v4l2_async_notifier_unregister" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x8cf22ace, "regulator_bulk_disable" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,mc");

MODULE_ALIAS("of:N*T*Cst,st-mipid02");
MODULE_ALIAS("of:N*T*Cst,st-mipid02C*");

MODULE_INFO(srcversion, "ED8113C8FB986B99333EE88");
