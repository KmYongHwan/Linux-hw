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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd8794d84, "amdtp_stream_pcm_pointer" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf44a972b, "driver_register" },
	{ 0xb5d7eaa9, "amdtp_domain_destroy" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x6587202e, "snd_info_create_card_entry" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc4142837, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x68b6685d, "fw_bus_type" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x77e309f9, "snd_rawmidi_set_ops" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x7e8c49f, "snd_rawmidi_new" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0x3108429, "cmp_connection_destroy" },
	{ 0xfb578fc5, "memset" },
	{ 0xaecfcf38, "amdtp_stream_get_max_payload" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0x5b1fe8ce, "cmp_connection_establish" },
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
	{ 0x890b3d61, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x65523885, "snd_card_new" },
	{ 0x9f149630, "amdtp_domain_stop" },
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
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x963cf8c8, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x81b63a56, "amdtp_stream_pcm_ack" },
	{ 0x605edf6, "amdtp_domain_init" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xc0f21b2, "fw_core_remove_address_handler" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0xa4953f81, "amdtp_stream_pcm_abort" },
	{ 0xf44bf2bd, "cmp_connection_break" },
	{ 0x9eb7d043, "cmp_connection_init" },
	{ 0xf57c0867, "snd_fw_schedule_registration" },
	{ 0x382b6757, "amdtp_am824_add_pcm_hw_constraints" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x68a57338, "snd_card_free" },
	{ 0x4b46eaf6, "snd_card_register" },
	{ 0xc337200d, "amdtp_am824_init" },
	{ 0x8de3a75d, "cmp_connection_release" },
	{ 0x30a78501, "snd_pcm_limit_hw_rates" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x523d6a86, "amdtp_am824_midi_trigger" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb5752134, "snd_pcm_new" },
	{ 0x1b4401c7, "cmp_connection_check_used" },
	{ 0x19fe29ed, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0xc38a66e0, "snd_fw_transaction" },
	{ 0xac1ab138, "amdtp_am824_set_parameters" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xb1a76f74, "cmp_connection_reserve" },
	{ 0xe914e41e, "strcpy" },
	{ 0x4b4db3a8, "fw_send_response" },
};

MODULE_INFO(depends, "snd-firewire-lib,snd,firewire-core,snd-rawmidi,snd-pcm,snd-hwdep");

MODULE_ALIAS("ieee1394:ven00000FF2mo0000400Fsp*ver*");
MODULE_ALIAS("ieee1394:ven00000FF2mo0001200Fsp*ver*");
MODULE_ALIAS("ieee1394:ven00001486mo00000AF8sp*ver*");
MODULE_ALIAS("ieee1394:ven00001486mo0000AF12sp*ver*");
MODULE_ALIAS("ieee1394:ven00001486mo000AF12Dsp*ver*");
MODULE_ALIAS("ieee1394:ven00001486mo000AF12Asp*ver*");
MODULE_ALIAS("ieee1394:ven00001486mo00000AF2sp*ver*");
MODULE_ALIAS("ieee1394:ven00001486mo00000AF4sp*ver*");
MODULE_ALIAS("ieee1394:ven00001486mo00000AF9sp*ver*");
MODULE_ALIAS("ieee1394:ven00001486mo000000F8sp*ver*");
MODULE_ALIAS("ieee1394:ven00001486mo0000AFD1sp*ver*");
MODULE_ALIAS("ieee1394:ven0000075Bmo0000AFB2sp*ver*");
MODULE_ALIAS("ieee1394:ven0000075Bmo0000AFB9sp*ver*");

MODULE_INFO(srcversion, "22847A9647676250B12B033");
