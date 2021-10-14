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
	{ 0xa071f2c6, "single_release" },
	{ 0xcec6343e, "seq_read" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0x9e0bd753, "tcpm_pd_hard_reset" },
	{ 0xceb50012, "tcpm_vbus_change" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x5aeff885, "i2c_smbus_write_i2c_block_data" },
	{ 0x3b84657b, "tcpm_pd_transmit_complete" },
	{ 0xb655342c, "tcpm_pd_receive" },
	{ 0xf6ae4a4, "i2c_smbus_read_i2c_block_data" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xe6170170, "fwnode_create_software_node" },
	{ 0xff0cadec, "extcon_get_extcon_dev" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x84c4bc58, "tcpm_register_port" },
	{ 0xe1ca0830, "device_get_named_child_node" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0x49b323d8, "device_property_read_string" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc4142837, "seq_printf" },
	{ 0x70691c99, "single_open" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0xfdefdbe3, "usb_debug_root" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfff30144, "extcon_get_state" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0x12a38747, "usleep_range" },
	{ 0x918fd6c, "i2c_smbus_write_byte_data" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xc37b9769, "tcpm_cc_change" },
	{ 0xc6810ec2, "i2c_smbus_read_byte_data" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x96848186, "scnprintf" },
	{ 0x9ea53d7f, "vsnprintf" },
	{ 0xceb66bec, "sched_clock_cpu" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xc144b33e, "debugfs_remove" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xd53f74e9, "fwnode_handle_put" },
	{ 0x76eeda4b, "tcpm_unregister_port" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "tcpm");

MODULE_ALIAS("i2c:typec_fusb302");
MODULE_ALIAS("of:N*T*Cfcs,fusb302");
MODULE_ALIAS("of:N*T*Cfcs,fusb302C*");

MODULE_INFO(srcversion, "B352EE4A1E655200D0C8B4C");
