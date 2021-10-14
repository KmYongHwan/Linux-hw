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
	{ 0x2d3385d3, "system_wq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1c7ec4a3, "pci_release_region" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x458a230b, "mwifiex_cancel_hs" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x87f5f48a, "pci_disable_msix" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0x8d281aca, "mwifiex_disable_auto_ds" },
	{ 0xc12ecfae, "pci_try_reset_function" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xdf8ace44, "mwifiex_write_data_complete" },
	{ 0x2bae67e2, "mwifiex_process_sleep_confirm_resp" },
	{ 0x999e8297, "vfree" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5904d89f, "mwifiex_queue_main_work" },
	{ 0x64eee032, "mwifiex_prepare_fw_dump_info" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x5ef6588d, "_mwifiex_dbg" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x46c4bed2, "mwifiex_add_card" },
	{ 0xf10de535, "ioread8" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x872569ef, "mwifiex_shutdown_sw" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb18156be, "skb_pull" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x1d0b5393, "pci_enable_msi" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x90b8d10f, "pci_clear_master" },
	{ 0xd4dad9f3, "mwifiex_alloc_dma_align_buf" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0xcc8afd53, "pci_enable_msix_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x527e1bd8, "pci_disable_msi" },
	{ 0x402acacc, "mwifiex_reinit_sw" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xa482a445, "mwifiex_handle_rx_packet" },
	{ 0x46036840, "mwifiex_deauthenticate_all" },
	{ 0xeafa3d1d, "mwifiex_remove_card" },
	{ 0x5cd3d48c, "mwifiex_enable_hs" },
	{ 0x74181c3a, "mwifiex_upload_device_dump" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb0e602eb, "memmove" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0x29315ef, "mwifiex_drv_info_dump" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x63ca9a35, "mwifiex_init_shutdown_fw" },
	{ 0x80fb2c60, "pci_request_region" },
	{ 0xa637b975, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "mwifiex");

MODULE_ALIAS("pci:v000011ABd00002B30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002B38sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002B42sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B4Bd00002B42sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E8146E4F59CABBB2C60714D");
