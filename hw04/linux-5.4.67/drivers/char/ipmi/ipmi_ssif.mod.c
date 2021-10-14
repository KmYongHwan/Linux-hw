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
	{ 0x722a53d5, "param_ops_ushort" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0xcde7ff37, "i2c_del_driver" },
	{ 0xa32ee0fe, "i2c_register_driver" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xc5850110, "printk" },
	{ 0x230094ac, "ipmi_smi_watchdog_pretimeout" },
	{ 0x40f2b10c, "ipmi_alloc_smi_msg" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x1d39a3c5, "_dev_notice" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xab735372, "ipmi_dmi_get_slave_addr" },
	{ 0x1953a300, "ipmi_add_smi" },
	{ 0xc10040e, "device_add_groups" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x67369b42, "ipmi_addr_src_to_str" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0xa258faf8, "i2c_new_device" },
	{ 0xb4ec4b77, "i2c_adapter_type" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xbfa087b0, "device_remove_groups" },
	{ 0x31cab048, "ipmi_smi_msg_received" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x571d537c, "device_property_read_u8_array" },
	{ 0x2d934d86, "device_property_read_u16_array" },
	{ 0xd7645c18, "i2c_for_each_dev" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4bfbdd4f, "i2c_smbus_write_block_data" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x11089ac7, "_ctype" },
	{ 0x963cf8c8, "get_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe4330a39, "ipmi_unregister_smi" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x29361773, "complete" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x756785cc, "i2c_smbus_read_block_data" },
	{ 0xf9a482f9, "msleep" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0x16779475, "i2c_unregister_device" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ipmi_msghandler");

MODULE_ALIAS("i2c:ipmi_ssif");
MODULE_ALIAS("acpi*:IPI0001:*");

MODULE_INFO(srcversion, "00AB9663FEA4605E3C671E6");
