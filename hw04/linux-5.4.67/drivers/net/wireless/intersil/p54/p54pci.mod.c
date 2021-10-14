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
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xe09613ba, "p54_register_common" },
	{ 0xfb7e71f0, "p54_read_eeprom" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x919dade8, "device_release_driver" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x49931fbb, "p54_parse_firmware" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0xcd374019, "p54_rx" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x8b742fa0, "p54_free_skb" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0x852036c1, "request_firmware_nowait" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb581d360, "p54_init_common" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0x20716107, "pci_try_set_mwi" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x2f586e32, "pci_dev_get" },
	{ 0x29361773, "complete" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x499e036, "p54_free_common" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xede283d, "release_firmware" },
	{ 0xe3fbf421, "p54_unregister_common" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x896845d2, "pci_save_state" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0xec8bd371, "pci_reenable_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "p54common");

MODULE_ALIAS("pci:v00001260d00003890sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00006001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001260d00003877sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001260d00003886sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001260d0000FFFFsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4ED4A9797DE563D4440D968");
