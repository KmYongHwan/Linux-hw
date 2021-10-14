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
	{ 0xb7ce766f, "rt2x00mac_tx_frames_pending" },
	{ 0x66df79b1, "rt2x00mac_get_ringparam" },
	{ 0xdd4eb582, "rt2x00mac_get_antenna" },
	{ 0x884429b3, "rt2x00mac_set_antenna" },
	{ 0x941eebc3, "rt2x00mac_flush" },
	{ 0x32137a00, "rt2x00mac_rfkill_poll" },
	{ 0xc57e8cff, "rt2x00mac_get_stats" },
	{ 0x7cf2ee97, "rt2x00mac_sw_scan_complete" },
	{ 0x5c5b2217, "rt2x00mac_sw_scan_start" },
	{ 0xcd4cb488, "rt2x00mac_set_key" },
	{ 0xc8274e41, "rt2x00mac_configure_filter" },
	{ 0xbbc9b90f, "rt2x00mac_bss_info_changed" },
	{ 0x37facb0a, "rt2x00mac_config" },
	{ 0xe495a845, "rt2x00mac_remove_interface" },
	{ 0x6486e2a0, "rt2x00mac_add_interface" },
	{ 0x5665f90b, "rt2x00mac_stop" },
	{ 0xbe2418b3, "rt2x00mac_start" },
	{ 0xe70e7f96, "rt2x00mac_tx" },
	{ 0x54b42a44, "rt2x00mmio_flush_queue" },
	{ 0x59f9c722, "rt2x00mmio_uninitialize" },
	{ 0x37797d6f, "rt2x00mmio_initialize" },
	{ 0xeca6c17c, "rt2x00pci_resume" },
	{ 0xb649e8bf, "rt2x00pci_suspend" },
	{ 0xceeb0161, "rt2x00pci_remove" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x9243512e, "rt2x00mmio_rxdone" },
	{ 0xfa8316c5, "rt2x00lib_beacondone" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x1e16d894, "rt2x00lib_txdone" },
	{ 0x26b2e2b2, "rt2x00queue_get_entry" },
	{ 0xe0bf0212, "rt2x00lib_txdone_noinfo" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xc6a70eb5, "rt2x00lib_set_mac_address" },
	{ 0xff7a0fdf, "eeprom_93cx6_multiread" },
	{ 0xd819a524, "crc_itu_t_table" },
	{ 0x9a34a2b, "crc_itu_t" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x11d80dd4, "__skb_pad" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9cf37c44, "__iowrite32_copy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x197a857, "rt2x00mmio_regbusy_read" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd71879ff, "rt2x00mac_conf_tx" },
	{ 0x1e5ec6d0, "rt2x00pci_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rt2x00lib,rt2x00mmio,rt2x00pci,eeprom_93cx6,crc-itu-t");

MODULE_ALIAS("pci:v00001814d00000301sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000302sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000401sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E07CB721F5444139C61A6F2");
