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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x70691c99, "single_open" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa071f2c6, "single_release" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc4142837, "seq_printf" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0xcec6343e, "seq_read" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x68a82987, "gpiochip_add_data_with_key" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xc144b33e, "debugfs_remove" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x4a95d625, "gpiochip_get_data" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:tps65010");
MODULE_ALIAS("i2c:tps65011");
MODULE_ALIAS("i2c:tps65012");
MODULE_ALIAS("i2c:tps65013");
MODULE_ALIAS("i2c:tps65014");

MODULE_INFO(srcversion, "EE339E45DCACADF2113C765");
