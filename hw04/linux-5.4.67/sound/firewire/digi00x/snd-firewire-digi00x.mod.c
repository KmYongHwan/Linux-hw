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
	{ 0xc33c7e69, "amdtp_domain_start" },
	{ 0xd8794d84, "amdtp_stream_pcm_pointer" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc593fe8f, "fw_iso_resources_update" },
	{ 0xf44a972b, "driver_register" },
	{ 0xb5d7eaa9, "amdtp_domain_destroy" },
	{ 0x754d539c, "strlen" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x6dc50487, "fw_csr_string" },
	{ 0x323ad9a7, "snd_pcm_hw_constraint_msbits" },
	{ 0x6587202e, "snd_info_create_card_entry" },
	{ 0x37e22f9b, "fw_iso_resources_init" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc4142837, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x68b6685d, "fw_bus_type" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x77e309f9, "snd_rawmidi_set_ops" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x7e8c49f, "snd_rawmidi_new" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaecfcf38, "amdtp_stream_get_max_payload" },
	{ 0xf9e89d9, "amdtp_stream_update" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xdb85e8a7, "amdtp_domain_add_stream" },
	{ 0x858d6bdd, "snd_pcm_set_ops" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8f991301, "snd_pcm_lib_get_vmalloc_page" },
	{ 0xf15658dc, "amdtp_stream_destroy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x201e44f1, "snd_hwdep_new" },
	{ 0x17e7d2e9, "snd_pcm_lib_ioctl" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x65523885, "snd_card_new" },
	{ 0x9f149630, "amdtp_domain_stop" },
	{ 0xe7427071, "fw_iso_resources_destroy" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x41e59f4, "snd_pcm_hw_rule_add" },
	{ 0x7ea19302, "put_device" },
	{ 0x5855a5b7, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4b096aad, "amdtp_stream_pcm_prepare" },
	{ 0x7c08cd59, "fw_core_add_address_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc06eefaf, "snd_pcm_set_sync" },
	{ 0xc5db6445, "fw_iso_resources_allocate" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x963cf8c8, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x81b63a56, "amdtp_stream_pcm_ack" },
	{ 0x605edf6, "amdtp_domain_init" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc0f21b2, "fw_core_remove_address_handler" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xb71589f0, "skip_spaces" },
	{ 0xcc333e2f, "amdtp_stream_set_parameters" },
	{ 0x9e4a9b71, "amdtp_stream_init" },
	{ 0xf57c0867, "snd_fw_schedule_registration" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x68a57338, "snd_card_free" },
	{ 0x4b46eaf6, "snd_card_register" },
	{ 0x9db4b379, "amdtp_stream_add_pcm_hw_constraints" },
	{ 0x53ca18e8, "amdtp_rate_table" },
	{ 0x30a78501, "snd_pcm_limit_hw_rates" },
	{ 0xb5752134, "snd_pcm_new" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x19fe29ed, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0xc38a66e0, "snd_fw_transaction" },
	{ 0x160c4cd0, "snd_rawmidi_transmit" },
	{ 0x806bb3d1, "fw_iso_resources_free" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xabdb3c17, "snd_rawmidi_receive" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe914e41e, "strcpy" },
	{ 0x4b4db3a8, "fw_send_response" },
};

MODULE_INFO(depends, "snd-firewire-lib,firewire-core,snd-pcm,snd,snd-rawmidi,snd-hwdep");

MODULE_ALIAS("ieee1394:ven0000A07Emo00000001sp*ver00000001*");
MODULE_ALIAS("ieee1394:ven0000A07Emo00000002sp*ver00000001*");

MODULE_INFO(srcversion, "BD49D7111D823FC18107800");
