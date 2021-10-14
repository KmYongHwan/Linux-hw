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
	{ 0x3ee01a98, "ishtp_cl_io_rb_recycle" },
	{ 0x277a6037, "hid_add_device" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf345307a, "ishtp_cl_unlink" },
	{ 0xdfb46d9c, "ishtp_set_connection_state" },
	{ 0xa0c0c33e, "ishtp_cl_driver_register" },
	{ 0xbf0837a6, "hid_parse_report" },
	{ 0x30583be4, "ishtp_cl_flush_queues" },
	{ 0xbe1dc996, "ishtp_dev_to_cl_device" },
	{ 0x41274e72, "ishtp_put_device" },
	{ 0x12fa8db6, "hid_input_report" },
	{ 0xad5e837, "ishtp_cl_connect" },
	{ 0xe8ca046c, "ishtp_set_rx_ring_size" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf55b1fba, "ishtp_cl_driver_unregister" },
	{ 0x640350b8, "ishtp_device" },
	{ 0xec188fce, "ishtp_cl_link" },
	{ 0xd6e604ce, "ish_hw_reset" },
	{ 0x3d81c730, "ishtp_cl_disconnect" },
	{ 0x5f9b0501, "ishtp_get_fw_client_id" },
	{ 0xc816072e, "ishtp_fw_cl_get_client" },
	{ 0x840be78f, "ishtp_trace_callback" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9501ee22, "ishtp_register_event_cb" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x115c65e4, "ishtp_get_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x44a228e7, "ishtp_set_drvdata" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x38c85b9d, "ishtp_get_client_data" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x387c599f, "hid_destroy_device" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xd4b74c09, "ishtp_set_tx_ring_size" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x32ea5ef6, "hid_allocate_device" },
	{ 0xf5084c42, "ishtp_set_client_data" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xa93aab8c, "ishtp_get_drvdata" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xea2a429f, "ishtp_cl_set_fw_client_id" },
	{ 0x886dbd59, "ishtp_cl_free" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x829ec51e, "ishtp_cl_send" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x97e4ca14, "ishtp_cl_allocate" },
	{ 0x709c2237, "ishtp_get_ishtp_device" },
	{ 0x38055494, "ishtp_cl_rx_get_rb" },
	{ 0xc40fa4ac, "hid_output_report" },
};

MODULE_INFO(depends, "intel-ishtp,hid");


MODULE_INFO(srcversion, "810A05814C3D28565B96C4D");
