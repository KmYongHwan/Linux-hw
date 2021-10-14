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
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x9425f1f7, "v4l2_subdev_notify_event" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0xdb2e52f, "v4l2_async_register_subdev" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf3d22e0d, "media_entity_pads_init" },
	{ 0xb3d574c3, "v4l2_ctrl_handler_setup" },
	{ 0xcca54e63, "v4l2_ctrl_new_custom" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0xdce54d36, "v4l2_i2c_subdev_init" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x269a41d4, "i2c_new_dummy_device" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xc5850110, "printk" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xf9cab3bd, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0x686bd540, "v4l2_src_change_event_subdev_subscribe" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x16779475, "i2c_unregister_device" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x9a0c4d09, "v4l2_async_unregister_subdev" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,mc");

MODULE_ALIAS("i2c:adv7180");
MODULE_ALIAS("i2c:adv7180cp");
MODULE_ALIAS("i2c:adv7180st");
MODULE_ALIAS("i2c:adv7182");
MODULE_ALIAS("i2c:adv7280");
MODULE_ALIAS("i2c:adv7280-m");
MODULE_ALIAS("i2c:adv7281");
MODULE_ALIAS("i2c:adv7281-m");
MODULE_ALIAS("i2c:adv7281-ma");
MODULE_ALIAS("i2c:adv7282");
MODULE_ALIAS("i2c:adv7282-m");

MODULE_INFO(srcversion, "6D42648BE83D463CC2FFE9B");
