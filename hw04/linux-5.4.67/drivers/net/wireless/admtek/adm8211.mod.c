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
	{ 0x442639ef, "param_ops_uint" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x17e93065, "ieee80211_wake_queue" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x22a17cbd, "ieee80211_tx_status_irqsafe" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x5d6a04c4, "ieee80211_rx_irqsafe" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb871c87f, "pci_set_mwi" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x15314fce, "consume_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x6f3c3906, "ieee80211_stop_queue" },
	{ 0x9c8bdd4a, "ieee80211_free_txskb" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x4d1a1157, "skb_push" },
	{ 0xb18156be, "skb_pull" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x11cd5fa9, "ieee80211_register_hw" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc5850110, "printk" },
	{ 0xff7a0fdf, "eeprom_93cx6_multiread" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0x9f5febc5, "ieee80211_alloc_hw_nm" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0xe04cbb4c, "ieee80211_free_hw" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xf36cc24f, "ieee80211_unregister_hw" },
	{ 0x136b2332, "pci_choose_state" },
	{ 0x896845d2, "pci_save_state" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mac80211,cfg80211,eeprom_93cx6");

MODULE_ALIAS("pci:v000010B7d00006000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001200d00008201sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001317d00008201sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001317d00008211sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "DCD00665E0871037AD4B5A5");
