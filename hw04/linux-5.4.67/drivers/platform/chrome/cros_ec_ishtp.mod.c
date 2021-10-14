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
	{ 0xf55b1fba, "ishtp_cl_driver_unregister" },
	{ 0xa0c0c33e, "ishtp_cl_driver_register" },
	{ 0xd917f6c6, "cros_ec_suspend" },
	{ 0x5dc9b186, "cros_ec_resume" },
	{ 0xbe1dc996, "ishtp_dev_to_cl_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa45e53e7, "cros_ec_check_result" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x829ec51e, "ishtp_cl_send" },
	{ 0x6a793890, "cros_ec_prepare_tx" },
	{ 0x9a9b2aea, "cros_ec_register" },
	{ 0x115c65e4, "ishtp_get_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0x38055494, "ishtp_cl_rx_get_rb" },
	{ 0x53b954a2, "up_read" },
	{ 0x3ee01a98, "ishtp_cl_io_rb_recycle" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x69acdf38, "memcpy" },
	{ 0xce807a25, "up_write" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xf5084c42, "ishtp_set_client_data" },
	{ 0x44a228e7, "ishtp_set_drvdata" },
	{ 0x97e4ca14, "ishtp_cl_allocate" },
	{ 0x57bc19d2, "down_write" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x640350b8, "ishtp_device" },
	{ 0x9501ee22, "ishtp_register_event_cb" },
	{ 0xad5e837, "ishtp_cl_connect" },
	{ 0xea2a429f, "ishtp_cl_set_fw_client_id" },
	{ 0x5f9b0501, "ishtp_get_fw_client_id" },
	{ 0xc816072e, "ishtp_fw_cl_get_client" },
	{ 0xe8ca046c, "ishtp_set_rx_ring_size" },
	{ 0xd4b74c09, "ishtp_set_tx_ring_size" },
	{ 0x709c2237, "ishtp_get_ishtp_device" },
	{ 0xec188fce, "ishtp_cl_link" },
	{ 0x823eae06, "blocking_notifier_call_chain" },
	{ 0x1e17f49f, "cros_ec_get_next_event" },
	{ 0x41274e72, "ishtp_put_device" },
	{ 0x886dbd59, "ishtp_cl_free" },
	{ 0x30583be4, "ishtp_cl_flush_queues" },
	{ 0xf345307a, "ishtp_cl_unlink" },
	{ 0x3d81c730, "ishtp_cl_disconnect" },
	{ 0xdfb46d9c, "ishtp_set_connection_state" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x38c85b9d, "ishtp_get_client_data" },
	{ 0xa93aab8c, "ishtp_get_drvdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "intel-ishtp,cros_ec");


MODULE_INFO(srcversion, "F171D97DFA8DC573DE5B2E5");
