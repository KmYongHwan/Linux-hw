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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x754d539c, "strlen" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0xf39aaf26, "platform_device_add" },
	{ 0xc08bbc3c, "v4l2_device_unregister_subdev" },
	{ 0xf5ee1308, "platform_device_put" },
	{ 0x6cbe5161, "platform_device_add_data" },
	{ 0x4530cfec, "platform_device_alloc" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x597b3a3f, "v4l2_ctrl_cluster" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0x31404eda, "v4l2_ctrl_new_std_menu" },
	{ 0xcca54e63, "v4l2_ctrl_new_custom" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdce54d36, "v4l2_i2c_subdev_init" },
	{ 0x4fc91a1f, "devm_regulator_get_optional" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xdd64e639, "strscpy" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0x2477c80f, "gpiod_set_value" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x12a38747, "usleep_range" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc5850110, "printk" },
	{ 0x29361773, "complete" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("i2c:si4713");

MODULE_INFO(srcversion, "7059AB609C64F3D46E87BDD");
