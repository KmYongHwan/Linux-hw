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
	{ 0x2d3385d3, "system_wq" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x481712b, "blk_cleanup_queue" },
	{ 0x1bee4974, "sg_alloc_table_chained" },
	{ 0x96d1f66b, "nvme_stop_ctrl" },
	{ 0x3cb845cc, "blk_mq_tagset_busy_iter" },
	{ 0x2b79cdc1, "blk_mq_start_request" },
	{ 0xc5161eae, "nvmf_register_transport" },
	{ 0xcdb23ac4, "nvme_shutdown_ctrl" },
	{ 0xaece739c, "nvme_set_queue_count" },
	{ 0x74bcd24f, "nvme_stop_queues" },
	{ 0x3d943849, "blk_mq_tag_to_rq" },
	{ 0x5c503dfe, "nvme_complete_async_event" },
	{ 0xacb25d00, "nvmet_sq_init" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf10797f3, "blk_mq_complete_request" },
	{ 0xb37923f7, "nvmf_reg_write32" },
	{ 0x2f4bc4d9, "blk_mq_update_nr_hw_queues" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1b280138, "nvmet_req_execute" },
	{ 0xf491e366, "blk_mq_init_queue" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x84028da0, "nvme_enable_ctrl" },
	{ 0x813cf212, "nvme_io_timeout" },
	{ 0xaa65f198, "nvmf_connect_admin_queue" },
	{ 0x8b378436, "blk_mq_free_tag_set" },
	{ 0x75038978, "nvme_init_identify" },
	{ 0xce25e467, "nvmf_reg_read64" },
	{ 0xdd83759d, "nvmet_register_transport" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x637b29db, "nvmet_req_init" },
	{ 0xd58bbbcb, "nvme_delete_wq" },
	{ 0x646b0273, "nvme_init_ctrl" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x5c2de0f0, "nvme_change_ctrl_state" },
	{ 0x950bd0d0, "nvmet_unregister_transport" },
	{ 0x7ea19302, "put_device" },
	{ 0x5e64eb83, "nvmf_unregister_transport" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x19c4ac68, "nvme_cleanup_cmd" },
	{ 0x7158e50f, "nvme_cancel_request" },
	{ 0x649b8c7f, "nvmet_sq_destroy" },
	{ 0xfea7eb51, "nvmf_get_address" },
	{ 0x1c28c47f, "blk_rq_map_sg" },
	{ 0xde50127, "blk_mq_alloc_tag_set" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x963cf8c8, "get_device" },
	{ 0xfa9a4614, "nvme_delete_ctrl" },
	{ 0x26907ad6, "nvmf_reg_read32" },
	{ 0x15dfb87c, "__nvmf_check_ready" },
	{ 0x274dd1a3, "sg_free_table_chained" },
	{ 0x37a0cba, "kfree" },
	{ 0x5f65b33b, "blk_mq_quiesce_queue" },
	{ 0xe656f74e, "nvmf_connect_io_queue" },
	{ 0x852adbac, "blk_mq_unquiesce_queue" },
	{ 0x3e7d110b, "nvme_start_ctrl" },
	{ 0xe760cb02, "nvme_setup_cmd" },
	{ 0xd45434ee, "admin_timeout" },
	{ 0xed705b7d, "blk_mq_tagset_wait_completed_request" },
	{ 0x79df4564, "nvmf_free_options" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x61d19290, "nvmf_fail_nonready_command" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x6802e99e, "nvme_complete_rq" },
	{ 0x52e9010a, "nvme_uninit_ctrl" },
};

MODULE_INFO(depends, "nvme-core,nvme-fabrics,nvmet");


MODULE_INFO(srcversion, "16F97A299C6B95A47B9C985");
