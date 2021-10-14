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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x139cee21, "wait_for_completion_io_timeout" },
	{ 0x7021fe18, "dma_direct_unmap_sg" },
	{ 0x18e60984, "__do_once_start" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xcd8b59b7, "nvme_get_features" },
	{ 0x481712b, "blk_cleanup_queue" },
	{ 0x2877d775, "pci_free_irq_vectors" },
	{ 0xab2acc0a, "nvme_reset_ctrl" },
	{ 0xb56f876f, "param_get_int" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x9536a812, "pci_sriov_configure_simple" },
	{ 0x919dade8, "device_release_driver" },
	{ 0xd8eb178d, "nvme_wait_reset" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x96d1f66b, "nvme_stop_ctrl" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x1e6d3dc, "nvme_unfreeze" },
	{ 0x3cb845cc, "blk_mq_tagset_busy_iter" },
	{ 0x2b79cdc1, "blk_mq_start_request" },
	{ 0x68dd7835, "nvme_set_features" },
	{ 0x4d4d7b79, "blk_mq_map_queues" },
	{ 0xcdb23ac4, "nvme_shutdown_ctrl" },
	{ 0x56470118, "__warn_printk" },
	{ 0xaece739c, "nvme_set_queue_count" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0x74bcd24f, "nvme_stop_queues" },
	{ 0x87b8798d, "sg_next" },
	{ 0x3d943849, "blk_mq_tag_to_rq" },
	{ 0x5c503dfe, "nvme_complete_async_event" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd5925c14, "nvme_kill_queues" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x495e1a7b, "param_set_int" },
	{ 0x6d253dca, "dmi_match" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0xf10797f3, "blk_mq_complete_request" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x2f4bc4d9, "blk_mq_update_nr_hw_queues" },
	{ 0xcde77bcc, "free_opal_dev" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x42635d55, "pm_suspend_global_flags" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xcbfb33e4, "init_opal_dev" },
	{ 0x8a9c70ed, "nvme_sec_submit" },
	{ 0xf491e366, "blk_mq_init_queue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x9118b456, "pci_alloc_irq_vectors_affinity" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xc21e426e, "pci_enable_pcie_error_reporting" },
	{ 0x95c5ff4a, "nvme_try_sched_reset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x84028da0, "nvme_enable_ctrl" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0x44d0d029, "blk_put_queue" },
	{ 0x813cf212, "nvme_io_timeout" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x51641162, "opal_unlock_from_suspend" },
	{ 0x9a0142ff, "sysfs_remove_file_from_group" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x8b378436, "blk_mq_free_tag_set" },
	{ 0x75038978, "nvme_init_identify" },
	{ 0x384a14a4, "nvme_remove_namespaces" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x21db6f7e, "pci_device_is_present" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x549e9adc, "blk_execute_rq_nowait" },
	{ 0x4b9369e2, "pci_load_saved_state" },
	{ 0x3d6886ae, "pci_request_irq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x3aa3875f, "blk_get_queue" },
	{ 0x646b0273, "nvme_init_ctrl" },
	{ 0xafaf0e45, "pci_select_bars" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xc60854c8, "kmem_cache_alloc_node_trace" },
	{ 0x5c2de0f0, "nvme_change_ctrl_state" },
	{ 0xe1ead75a, "blk_mq_free_request" },
	{ 0x54085d0d, "__tracepoint_nvme_sq" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x9c122bcf, "mempool_create_node" },
	{ 0x4ddc03f7, "pci_free_irq" },
	{ 0x7ea19302, "put_device" },
	{ 0x79a2b246, "dma_max_mapping_size" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4848fcac, "nvme_sync_queues" },
	{ 0x19c4ac68, "nvme_cleanup_cmd" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x7158e50f, "nvme_cancel_request" },
	{ 0xa80b9f0b, "nvme_wait_freeze" },
	{ 0x97d68db1, "blk_mq_pci_map_queues" },
	{ 0xf5f370e0, "async_schedule_node" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x1c28c47f, "blk_rq_map_sg" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xde50127, "blk_mq_alloc_tag_set" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x944c43f, "node_states" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbf528ae5, "nvme_disable_ctrl" },
	{ 0x963cf8c8, "get_device" },
	{ 0xc78cbbeb, "pci_irq_vector" },
	{ 0x64b62862, "nvme_wq" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x9ad03563, "pci_disable_pcie_error_reporting" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x3ecb7f7, "dma_direct_map_sg" },
	{ 0x5f65b33b, "blk_mq_quiesce_queue" },
	{ 0x90aa5ae9, "nvme_submit_sync_cmd" },
	{ 0x852adbac, "blk_mq_unquiesce_queue" },
	{ 0xedc03953, "iounmap" },
	{ 0x3e7d110b, "nvme_start_ctrl" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x7583b3d4, "nvme_start_freeze" },
	{ 0x96848186, "scnprintf" },
	{ 0xe760cb02, "nvme_setup_cmd" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xd45434ee, "admin_timeout" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x777decfc, "nvme_alloc_request" },
	{ 0x2f2f669f, "nvme_start_queues" },
	{ 0xed705b7d, "blk_mq_tagset_wait_completed_request" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xef53f3b5, "pci_enable_device_mem" },
	{ 0xb5c44c6, "nvme_wait_freeze_timeout" },
	{ 0xfe31ba97, "pci_release_selected_regions" },
	{ 0xd8a909f7, "pci_request_selected_regions" },
	{ 0x6802e99e, "nvme_complete_rq" },
	{ 0x754e62f4, "dma_pool_create" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0x52e9010a, "nvme_uninit_ctrl" },
	{ 0xa637b975, "dma_ops" },
	{ 0x7c1fe8d9, "pcie_aspm_enabled" },
	{ 0x896845d2, "pci_save_state" },
	{ 0x4198ca95, "__do_once_done" },
};

MODULE_INFO(depends, "nvme-core");

MODULE_ALIAS("pci:v00008086d00000953sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A53sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A54sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A55sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000F1A5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000F1A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005845sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000126Fd00002263sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB1d00000100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C58d00000003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C58d00000023sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C5Fd00000540sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000144Dd0000A821sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000144Dd0000A822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D1Dd00001F1Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D1Dd00002807sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D1Dd00002601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00005762sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001CC1d00008201sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C5Cd00001504sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v*d*sv*sd*bc01sc08i02*");
MODULE_ALIAS("pci:v0000106Bd00002001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00002003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00002005sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "9AF1C20BD09DCB0777F1172");
