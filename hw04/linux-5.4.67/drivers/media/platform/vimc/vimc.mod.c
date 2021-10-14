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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6c3fee80, "component_unbind_all" },
	{ 0xc2fbd82a, "v4l2_subdev_call_wrappers" },
	{ 0xae0b7652, "v4l2_device_unregister" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x91535130, "component_bind_all" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x1364cd39, "component_match_add_release" },
	{ 0x67f4be04, "component_master_del" },
	{ 0x3d32ae7, "platform_device_register_full" },
	{ 0xdd64e639, "strscpy" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x204be45b, "v4l2_device_register" },
	{ 0xba312d7b, "current_task" },
	{ 0xe541dad7, "freezing_slow_path" },
	{ 0xc5850110, "printk" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0xf3d22e0d, "media_entity_pads_init" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xc08bbc3c, "v4l2_device_unregister_subdev" },
	{ 0xda4c81b, "media_device_cleanup" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x12b678d5, "platform_device_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x26010d8e, "v4l2_device_register_subdev" },
	{ 0x8c59cc8d, "media_create_pad_link" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xe31b2c85, "v4l2_subdev_init" },
	{ 0xde725bff, "__media_device_register" },
	{ 0xc8a4a67d, "media_entity_remote_pad" },
	{ 0xab5b6873, "v4l2_device_register_subdev_nodes" },
	{ 0x37a0cba, "kfree" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xb257330c, "component_master_add_with_match" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2541f0ac, "media_device_init" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x8a275f6b, "media_device_unregister" },
};

MODULE_INFO(depends, "videodev,mc");


MODULE_INFO(srcversion, "1201E530A742D2A15A5913D");
