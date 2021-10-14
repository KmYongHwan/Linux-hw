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
	{ 0x7021fe18, "dma_direct_unmap_sg" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x481712b, "blk_cleanup_queue" },
	{ 0x1bee4974, "sg_alloc_table_chained" },
	{ 0xab2acc0a, "nvme_reset_ctrl" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x96d1f66b, "nvme_stop_ctrl" },
	{ 0x3cb845cc, "blk_mq_tagset_busy_iter" },
	{ 0x2b79cdc1, "blk_mq_start_request" },
	{ 0xc5161eae, "nvmf_register_transport" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xaece739c, "nvme_set_queue_count" },
	{ 0x8aeb7a6b, "device_destroy" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0x74bcd24f, "nvme_stop_queues" },
	{ 0x87b8798d, "sg_next" },
	{ 0x5c503dfe, "nvme_complete_async_event" },
	{ 0xdfd8a793, "nvmf_should_reconnect" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xf10797f3, "blk_mq_complete_request" },
	{ 0xb37923f7, "nvmf_reg_write32" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x2f4bc4d9, "blk_mq_update_nr_hw_queues" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf491e366, "blk_mq_init_queue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x84028da0, "nvme_enable_ctrl" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x813cf212, "nvme_io_timeout" },
	{ 0xc5850110, "printk" },
	{ 0xaa65f198, "nvmf_connect_admin_queue" },
	{ 0x8b378436, "blk_mq_free_tag_set" },
	{ 0x548bc933, "class_unregister" },
	{ 0x75038978, "nvme_init_identify" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xce25e467, "nvmf_reg_read64" },
	{ 0xffb7c514, "ida_free" },
	{ 0x9166fada, "strncpy" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x88e96942, "device_create" },
	{ 0x3cdf68c7, "__class_register" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x37480d59, "kobject_uevent_env" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x646b0273, "nvme_init_ctrl" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x5c2de0f0, "nvme_change_ctrl_state" },
	{ 0xa916b694, "strnlen" },
	{ 0x7ea19302, "put_device" },
	{ 0x5e64eb83, "nvmf_unregister_transport" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x19c4ac68, "nvme_cleanup_cmd" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfea7eb51, "nvmf_get_address" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x1c28c47f, "blk_rq_map_sg" },
	{ 0xde50127, "blk_mq_alloc_tag_set" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x963cf8c8, "get_device" },
	{ 0xfa9a4614, "nvme_delete_ctrl" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x26907ad6, "nvmf_reg_read32" },
	{ 0x64b62862, "nvme_wq" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x15dfb87c, "__nvmf_check_ready" },
	{ 0x274dd1a3, "sg_free_table_chained" },
	{ 0x37a0cba, "kfree" },
	{ 0x3ecb7f7, "dma_direct_map_sg" },
	{ 0x5f65b33b, "blk_mq_quiesce_queue" },
	{ 0xfba7ddd2, "match_u64" },
	{ 0xe656f74e, "nvmf_connect_io_queue" },
	{ 0x852adbac, "blk_mq_unquiesce_queue" },
	{ 0x3e7d110b, "nvme_start_ctrl" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0xe760cb02, "nvme_setup_cmd" },
	{ 0x587acef9, "nvme_stop_keep_alive" },
	{ 0xd45434ee, "admin_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x2f2f669f, "nvme_start_queues" },
	{ 0xed705b7d, "blk_mq_tagset_wait_completed_request" },
	{ 0x79df4564, "nvmf_free_options" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x61d19290, "nvmf_fail_nonready_command" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x6802e99e, "nvme_complete_rq" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x52e9010a, "nvme_uninit_ctrl" },
	{ 0xa637b975, "dma_ops" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "nvme-core,nvme-fabrics");


MODULE_INFO(srcversion, "E7193ABE92DCA35075CC8E1");
