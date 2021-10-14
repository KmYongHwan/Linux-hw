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
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf45bf890, "devm_regulator_bulk_get" },
	{ 0x59f91a4d, "regulator_bulk_enable" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x31404eda, "v4l2_ctrl_new_std_menu" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xf3d22e0d, "media_entity_pads_init" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x690e053c, "devm_gpio_request_one" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc08bbc3c, "v4l2_device_unregister_subdev" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x4c3c8b62, "__v4l2_ctrl_s_ctrl" },
	{ 0x610fc61f, "v4l2_ctrl_new_int_menu" },
	{ 0x8cf22ace, "regulator_bulk_disable" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb3d574c3, "v4l2_ctrl_handler_setup" },
	{ 0xee8356e4, "v4l2_ctrl_handler_log_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x74b280d5, "v4l2_ctrl_auto_cluster" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x7d8c5e78, "gpiod_set_raw_value" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xdce54d36, "v4l2_i2c_subdev_init" },
};

MODULE_INFO(depends, "videodev,mc");

MODULE_ALIAS("i2c:M5MOLS");

MODULE_INFO(srcversion, "4BC7EE916F7280C284FB206");
