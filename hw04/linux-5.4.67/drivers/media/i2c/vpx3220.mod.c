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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdfec67c9, "i2c_smbus_read_word_data" },
	{ 0xb3d574c3, "v4l2_ctrl_handler_setup" },
	{ 0xf993f06, "v4l2_ctrl_new_std" },
	{ 0x6597374f, "v4l2_ctrl_handler_init_class" },
	{ 0xdce54d36, "v4l2_i2c_subdev_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2f4e42e1, "i2c_smbus_write_word_data" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0xba312d7b, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0x9bfbdef6, "v4l2_ctrl_handler_free" },
	{ 0xc08bbc3c, "v4l2_device_unregister_subdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("i2c:vpx3220a");
MODULE_ALIAS("i2c:vpx3216b");
MODULE_ALIAS("i2c:vpx3214c");

MODULE_INFO(srcversion, "1C354FB58B942845D5078B8");
