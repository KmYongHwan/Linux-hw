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
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0x997f9924, "gpiod_to_irq" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0x15fc91fe, "device_init_wakeup" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xff76d558, "input_register_device" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x2f4e42e1, "i2c_smbus_write_word_data" },
	{ 0xa89177c8, "input_set_capability" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xeebd5754, "input_allocate_device" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5ada0011, "input_event" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0xdfec67c9, "i2c_smbus_read_word_data" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:tca6416-keys");
MODULE_ALIAS("i2c:tca6408-keys");

MODULE_INFO(srcversion, "4AC7DE1882A618AA48646E5");
