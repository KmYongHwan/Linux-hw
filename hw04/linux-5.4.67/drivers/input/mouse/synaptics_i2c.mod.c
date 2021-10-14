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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x5ada0011, "input_event" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0xdfec67c9, "i2c_smbus_read_word_data" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xff76d558, "input_register_device" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xeebd5754, "input_allocate_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0x12a38747, "usleep_range" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:synaptics_i2c");

MODULE_INFO(srcversion, "75AA8A92A557356F31B0D9C");
