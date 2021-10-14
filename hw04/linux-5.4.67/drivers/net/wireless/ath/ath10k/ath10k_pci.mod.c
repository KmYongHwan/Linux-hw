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
	{ 0x24ac374c, "ath10k_ce_completed_recv_next_nolock" },
	{ 0x55e02bf7, "ath10k_htt_txrx_compl_task" },
	{ 0xd2ebfaf6, "ath10k_core_unregister" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x541adc5e, "ath10k_htt_t2h_msg_handler" },
	{ 0x1c7ec4a3, "pci_release_region" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0xb44e4ce6, "ath10k_info" },
	{ 0x617eb118, "ath10k_coredump_new" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xa2b9bc6a, "ath10k_core_register" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x9d0eedd9, "ath10k_ce_init_pipe" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xba28ee7c, "ath10k_ce_deinit_pipe" },
	{ 0xdf0fd87e, "ath10k_htc_rx_completion_handler" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xd28918b8, "ath10k_core_destroy" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x50dd77c4, "__tracepoint_ath10k_log_dbg" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x3f66d19f, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x622aece5, "ath10k_htt_rx_pktlog_completion_handler" },
	{ 0x662180ee, "__ath10k_ce_rx_num_free_bufs" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x15e5db2, "ath10k_debug_mask" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xf4d75b56, "ath10k_core_create" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x5a3d73d6, "ath10k_ce_rx_post_buf" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xd24ada92, "ath10k_ce_enable_interrupts" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1a648b14, "ath10k_ce_per_engine_service_any" },
	{ 0x4e995878, "ath10k_ce_dump_registers" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xdee9a43a, "ath10k_ce_completed_send_next" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb18156be, "skb_pull" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x56eea74c, "ath10k_htc_tx_completion_handler" },
	{ 0x1d0b5393, "pci_enable_msi" },
	{ 0x928abc97, "ath10k_ce_completed_recv_next" },
	{ 0x90b8d10f, "pci_clear_master" },
	{ 0xa9fed0ac, "ath10k_ce_revoke_recv_next" },
	{ 0x8781ab80, "ath10k_ce_free_pipe" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x33ee393d, "__ath10k_ce_send_revert" },
	{ 0x97f8d776, "ath10k_htt_hif_tx_complete" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xfc5234ed, "ath10k_ce_rx_update_write_idx" },
	{ 0x6a641f96, "__napi_schedule" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x8f1410c, "ath10k_ce_num_free_src_entries" },
	{ 0xb7d7cf08, "ath10k_print_driver_info" },
	{ 0x1000e51, "schedule" },
	{ 0x90bfde8e, "ath10k_err" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0x605fd73a, "ath10k_coredump_get_mem_layout" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x14e1d7a0, "ath10k_ce_send" },
	{ 0x31d37ca5, "ath10k_ce_cancel_send_next" },
	{ 0x24fe2735, "ath10k_ce_per_engine_service" },
	{ 0xecea3377, "ath10k_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x527e1bd8, "pci_disable_msi" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x991ea525, "ath10k_ce_alloc_pipe" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xeaf3bd09, "ath10k_ce_send_nolock" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0x4ad8a919, "pcie_capability_write_word" },
	{ 0x80fb2c60, "pci_request_region" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xa637b975, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xd0065fca, "pcie_capability_read_word" },
	{ 0x616f40cc, "ath10k_ce_disable_interrupts" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "ath10k_core");

MODULE_ALIAS("pci:v00000777d000011ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000003Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000003Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000056sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000046sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000050sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "003369121503419B38FB172");
