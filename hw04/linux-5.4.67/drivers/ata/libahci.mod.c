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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xd45d73c4, "ata_dummy_port_ops" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xebd6b19f, "ata_port_freeze" },
	{ 0xf9a482f9, "msleep" },
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0xf8f3a0fb, "ata_ratelimit" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x70839a4e, "dev_attr_sw_activity" },
	{ 0xddb1eed3, "ata_port_printk" },
	{ 0x9bb077cb, "sata_pmp_error_handler" },
	{ 0xb27c34be, "sata_link_scr_lpm" },
	{ 0xc9055ce7, "sata_pmp_qc_defer_cmd_switch" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2e4cde64, "ata_port_desc" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xa9ae0075, "dev_attr_ncq_prio_enable" },
	{ 0x15dfb928, "dev_attr_em_message" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4fdc945d, "sata_deb_timing_normal" },
	{ 0x69bf5251, "sata_pmp_port_ops" },
	{ 0xe67629c2, "ata_ehi_push_desc" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x44e20235, "ata_dev_set_feature" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x74aa4167, "ata_dev_printk" },
	{ 0x524dc4ea, "ata_wait_register" },
	{ 0xaa8d59f8, "ata_std_qc_defer" },
	{ 0x87c0191e, "ata_host_start" },
	{ 0x3ebfae75, "ata_link_abort" },
	{ 0x6110ab60, "dev_attr_unload_heads" },
	{ 0x5c6dd66d, "ata_msleep" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xcccfb2fa, "sata_deb_timing_hotplug" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xf4358872, "devm_kfree" },
	{ 0xf6d01da4, "ata_ehi_clear_desc" },
	{ 0xa410302d, "sata_link_hardreset" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x5ec62549, "ata_dev_classify" },
	{ 0x37e1b2ec, "ata_host_activate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7646cee, "ata_tf_to_fis" },
	{ 0x80711a75, "ata_host_register" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x718dc7a6, "dev_attr_em_message_type" },
	{ 0x9f547502, "sata_lpm_ignore_phy_events" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18807068, "ata_link_printk" },
	{ 0xcf010fa3, "ata_wait_after_reset" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6d623d9, "ata_qc_complete_multiple" },
	{ 0x3e87c614, "ata_link_next" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9384cd49, "ata_tf_from_fis" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x97fdd0af, "ata_std_postreset" },
	{ 0xb21aa7bc, "dmam_alloc_attrs" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd3b44ddd, "dev_attr_link_power_management_policy" },
	{ 0xc482f17, "ata_port_abort" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x2a69b14, "sata_async_notification" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A9B41AACFFFC209BAB2653E");
