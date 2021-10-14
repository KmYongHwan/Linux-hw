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
	{ 0xa24f23d8, "__request_module" },
	{ 0xfc6380e5, "dvb_ringbuffer_free" },
	{ 0xb3ade458, "rc_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xebbc2d9b, "dvb_ringbuffer_init" },
	{ 0x807de5a4, "saa7146_vfree_destroy_pgtable" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x7e56b741, "dvb_unregister_adapter" },
	{ 0xc030adcf, "saa7146_vmalloc_build_pgtable" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x1cb65ec0, "saa7146_setgpio" },
	{ 0x3c2b291b, "dvb_register_frontend" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0x893058f5, "dvb_register_device" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x91a6794b, "dvb_ringbuffer_read_user" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x5386438a, "dma_direct_sync_sg_for_cpu" },
	{ 0x4db52a6e, "dvb_unregister_frontend" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xf8b9cb34, "saa7146_stop_preview" },
	{ 0xdd64e639, "strscpy" },
	{ 0x6e9eea20, "saa7146_set_hps_source_and_sync" },
	{ 0x8522d6bc, "strncpy_from_user" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xe381324, "rc_allocate_device" },
	{ 0xbc4f0ef3, "dvb_net_release" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb7146edb, "i2c_add_adapter" },
	{ 0x6181aec0, "dvb_ringbuffer_flush_spinlock_wakeup" },
	{ 0x815bcf4f, "dvb_frontend_detach" },
	{ 0x697eb047, "ttpci_eeprom_parse_mac" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9e23a616, "saa7146_register_device" },
	{ 0x2f5cdf80, "dvb_ringbuffer_write" },
	{ 0xfb578fc5, "memset" },
	{ 0xe93af497, "rc_free_device" },
	{ 0xdefbea52, "default_llseek" },
	{ 0x50425fbf, "param_ops_short" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x678ab8bd, "dvb_dmxdev_release" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0x22cdca8c, "saa7146_unregister_device" },
	{ 0x1d08f348, "dvb_net_init" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x66e78e1a, "dvb_generic_release" },
	{ 0x9ca01f8e, "rc_keydown" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x1e1c22e8, "rc_register_device" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x752832c, "noop_llseek" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xcb74683c, "dvb_unregister_device" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x63e744d5, "saa7146_start_preview" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xfb09f39a, "dvb_ringbuffer_read" },
	{ 0x39932179, "i2c_del_adapter" },
	{ 0xa916b694, "strnlen" },
	{ 0x6c405a96, "saa7146_register_extension" },
	{ 0x2174ea7, "dvb_generic_ioctl" },
	{ 0xdcf60586, "dvb_dmx_swfilter_packets" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x2fe5e766, "dvb_generic_open" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe138ce6b, "dvb_ringbuffer_avail" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x562bf022, "dvb_register_adapter" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4ecedfe7, "saa7146_vv_release" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3352dd2, "dvb_ringbuffer_empty" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0xf42938bc, "saa7146_i2c_adapter_prepare" },
	{ 0x71deb539, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2f487bce, "saa7146_wait_for_debi_done" },
	{ 0x9216a4e8, "saa7146_vv_init" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xede283d, "release_firmware" },
	{ 0xa637b975, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x565bd19e, "saa7146_unregister_extension" },
	{ 0xb3927325, "dvb_dmxdev_init" },
};

MODULE_INFO(depends, "dvb-core,rc-core,saa7146,saa7146_vv,ttpci-eeprom");

MODULE_ALIAS("pci:v00001131d00007146sv0000110Asd00000000bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00000000bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00000001bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00000002bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00000003bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00000004bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00000006bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00000008bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd0000000Abc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd0000000Ebc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001002bc*sc*i*");

MODULE_INFO(srcversion, "819DFDCACFA31A0234453E0");
